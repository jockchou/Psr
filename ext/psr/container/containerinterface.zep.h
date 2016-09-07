
extern zend_class_entry *psr_container_containerinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Container_ContainerInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_container_containerinterface_get, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_container_containerinterface_has, 0, 0, 1)
	ZEND_ARG_INFO(0, id)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_container_containerinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Container_ContainerInterface, get, arginfo_psr_container_containerinterface_get)
	PHP_ABSTRACT_ME(Psr_Container_ContainerInterface, has, arginfo_psr_container_containerinterface_has)
	PHP_FE_END
};
