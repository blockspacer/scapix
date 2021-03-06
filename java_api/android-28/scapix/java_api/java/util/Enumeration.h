// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_ENUMERATION_H
#define SCAPIX_JAVA_UTIL_ENUMERATION_H

namespace scapix::java_api {
namespace java::util {

class Enumeration : public object_base<SCAPIX_META_STRING("java/util/Enumeration"),
	java::lang::Object>
{
public:

	jboolean hasMoreElements();
	ref<java::lang::Object> nextElement();

protected:

	Enumeration(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util {

inline jboolean Enumeration::hasMoreElements() { return call_method<SCAPIX_META_STRING("hasMoreElements"), jboolean>(); }
inline ref<java::lang::Object> Enumeration::nextElement() { return call_method<SCAPIX_META_STRING("nextElement"), ref<java::lang::Object>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ENUMERATION_H
