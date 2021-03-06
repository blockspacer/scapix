// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/IndexOutOfBoundsException.h>

#ifndef SCAPIX_JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_H
#define SCAPIX_JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang {

class StringIndexOutOfBoundsException : public object_base<SCAPIX_META_STRING("java/lang/StringIndexOutOfBoundsException"),
	java::lang::IndexOutOfBoundsException>
{
public:

	static ref<StringIndexOutOfBoundsException> new_object();
	static ref<StringIndexOutOfBoundsException> new_object(ref<java::lang::String> s);
	static ref<StringIndexOutOfBoundsException> new_object(jint index);

protected:

	StringIndexOutOfBoundsException(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<StringIndexOutOfBoundsException> StringIndexOutOfBoundsException::new_object() { return base_::new_object(); }
inline ref<StringIndexOutOfBoundsException> StringIndexOutOfBoundsException::new_object(ref<java::lang::String> s) { return base_::new_object(s); }
inline ref<StringIndexOutOfBoundsException> StringIndexOutOfBoundsException::new_object(jint index) { return base_::new_object(index); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_H
