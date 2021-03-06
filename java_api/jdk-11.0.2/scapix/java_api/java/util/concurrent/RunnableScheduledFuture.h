// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/RunnableFuture.h>
#include <scapix/java_api/java/util/concurrent/ScheduledFuture.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_RUNNABLESCHEDULEDFUTURE_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_RUNNABLESCHEDULEDFUTURE_H

namespace scapix::java_api {
namespace java::util::concurrent {

class RunnableScheduledFuture : public object_base<SCAPIX_META_STRING("java/util/concurrent/RunnableScheduledFuture"),
	java::lang::Object,
	java::util::concurrent::RunnableFuture,
	java::util::concurrent::ScheduledFuture>
{
public:

	jboolean isPeriodic();

protected:

	RunnableScheduledFuture(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::concurrent {

inline jboolean RunnableScheduledFuture::isPeriodic() { return call_method<SCAPIX_META_STRING("isPeriodic"), jboolean>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_RUNNABLESCHEDULEDFUTURE_H
