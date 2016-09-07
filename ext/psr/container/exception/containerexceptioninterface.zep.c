
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * Base interface representing a generic exception in a container.
 */
ZEPHIR_INIT_CLASS(Psr_Container_Exception_ContainerExceptionInterface) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Container\\Exception, ContainerExceptionInterface, psr, container_exception_containerexceptioninterface, NULL);

	return SUCCESS;

}

