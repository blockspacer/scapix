// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_LANG_DEPRECATED_H
#define SCAPIX_JAVA_LANG_DEPRECATED_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::lang {

class Deprecated : public object_base<SCAPIX_META_STRING("java/lang/Deprecated"),
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	ref<java::lang::String> since();
	jboolean forRemoval();

protected:

	Deprecated(handle_type h) : base_(h) {}

};

} // namespace java::lang
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::lang {

inline ref<java::lang::String> Deprecated::since() { return call_method<SCAPIX_META_STRING("since"), ref<java::lang::String>>(); }
inline jboolean Deprecated::forRemoval() { return call_method<SCAPIX_META_STRING("forRemoval"), jboolean>(); }

} // namespace java::lang
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_DEPRECATED_H
