
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Psr_Http_Message_StreamInterface) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Http\\Message, StreamInterface, psr, http_message_streaminterface, psr_http_message_streaminterface_method_entry);

	zend_declare_class_constant_long(psr_http_message_streaminterface_ce, SL("SEEK_SET"), 0 TSRMLS_CC);

	zend_declare_class_constant_long(psr_http_message_streaminterface_ce, SL("SEEK_CUR"), 1 TSRMLS_CC);

	zend_declare_class_constant_long(psr_http_message_streaminterface_ce, SL("SEEK_END"), 2 TSRMLS_CC);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, __toString);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, close);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, detach);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, getSize);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, tell);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, eof);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, isSeekable);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, seek);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, rewind);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, isWritable);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, write);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, isReadable);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, read);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, getContents);

ZEPHIR_DOC_METHOD(Psr_Http_Message_StreamInterface, getMetadata);

