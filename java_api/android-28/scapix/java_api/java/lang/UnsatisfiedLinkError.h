// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/LinkageError.h>

#ifndef SCAPIX_JAVA_LANG_UNSATISFIEDLINKERROR_H
#define SCAPIX_JAVA_LANG_UNSATISFIEDLINKERROR_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang {

class UnsatisfiedLinkError : public object_base<SCAPIX_META_STRING("java/lang/UnsatisfiedLinkError"),
	java::lang::LinkageError>
{
public:

	static ref<UnsatisfiedLinkError> new_object();
	static ref<UnsatisfiedLinkError> new_object(ref<java::lang::String> s);

protected:

	UnsatisfiedLinkError(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<UnsatisfiedLinkError> UnsatisfiedLinkError::new_object() { return base_::new_object(); }
inline ref<UnsatisfiedLinkError> UnsatisfiedLinkError::new_object(ref<java::lang::String> s) { return base_::new_object(s); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_UNSATISFIEDLINKERROR_H
