// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_TIMEDMETADATA_H
#define SCAPIX_ANDROID_MEDIA_TIMEDMETADATA_H

namespace scapix::java_api {
namespace android::media {

class TimedMetaData : public object_base<SCAPIX_META_STRING("android/media/TimedMetaData"),
	java::lang::Object>
{
public:

	jlong getTimestamp();
	ref<link::java::array<jbyte>> getMetaData();

protected:

	TimedMetaData(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::media {

inline jlong TimedMetaData::getTimestamp() { return call_method<SCAPIX_META_STRING("getTimestamp"), jlong>(); }
inline ref<link::java::array<jbyte>> TimedMetaData::getMetaData() { return call_method<SCAPIX_META_STRING("getMetaData"), ref<link::java::array<jbyte>>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TIMEDMETADATA_H
