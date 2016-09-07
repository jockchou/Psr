
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * No entry was found in the container.
 */
ZEPHIR_INIT_CLASS(Psr_Container_Exception_NotFoundExceptionInterface) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Container\\Exception, NotFoundExceptionInterface, psr, container_exception_notfoundexceptioninterface, NULL);

	zend_class_implements(psr_container_exception_notfoundexceptioninterface_ce TSRMLS_CC, 1, psr_container_exception_containerexceptioninterface_ce);
	return SUCCESS;

}

