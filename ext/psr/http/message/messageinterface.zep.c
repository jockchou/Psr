
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Psr_Http_Message_MessageInterface) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Http\\Message, MessageInterface, psr, http_message_messageinterface, psr_http_message_messageinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, getProtocolVersion);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, withProtocolVersion);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, getHeaders);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, hasHeader);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, getHeader);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, getHeaderLine);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, withHeader);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, withAddedHeader);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, withoutHeader);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, getBody);

ZEPHIR_DOC_METHOD(Psr_Http_Message_MessageInterface, withBody);

