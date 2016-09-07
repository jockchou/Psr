
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * Describes the interface of a container that exposes methods to read its entries.
 */
ZEPHIR_INIT_CLASS(Psr_Container_ContainerInterface) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Container, ContainerInterface, psr, container_containerinterface, psr_container_containerinterface_method_entry);

	return SUCCESS;

}

/**
 * Finds an entry of the container by its identifier and returns it.
 *
 * @param string $id Identifier of the entry to look for.
 *
 * @throws NotFoundExceptionInterface  No entry was found for this identifier.
 * @throws ContainerExceptionInterface Error while retrieving the entry.
 *
 * @return mixed Entry.
 */
ZEPHIR_DOC_METHOD(Psr_Container_ContainerInterface, get);

/**
 * Returns true if the container can return an entry for the given identifier.
 * Returns false otherwise.
 *
 * `has($id)` returning true does not mean that `get($id)` will not throw an exception.
 * It does however mean that `get($id)` will not throw a `NotFoundException`.
 *
 * @param string $id Identifier of the entry to look for.
 *
 * @return boolean
 */
ZEPHIR_DOC_METHOD(Psr_Container_ContainerInterface, has);

