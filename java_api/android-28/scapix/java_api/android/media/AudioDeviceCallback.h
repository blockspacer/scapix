// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_AUDIODEVICECALLBACK_H
#define SCAPIX_ANDROID_MEDIA_AUDIODEVICECALLBACK_H

namespace scapix::java_api {

namespace android::media { class AudioDeviceInfo; }

namespace android::media {

class AudioDeviceCallback : public object_base<SCAPIX_META_STRING("android/media/AudioDeviceCallback"),
	java::lang::Object>
{
public:

	static ref<AudioDeviceCallback> new_object();
	void onAudioDevicesAdded(ref<link::java::array<android::media::AudioDeviceInfo>> addedDevices);
	void onAudioDevicesRemoved(ref<link::java::array<android::media::AudioDeviceInfo>> removedDevices);

protected:

	AudioDeviceCallback(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/AudioDeviceInfo.h>

namespace scapix::java_api {
namespace android::media {

inline ref<AudioDeviceCallback> AudioDeviceCallback::new_object() { return base_::new_object(); }
inline void AudioDeviceCallback::onAudioDevicesAdded(ref<link::java::array<android::media::AudioDeviceInfo>> addedDevices) { return call_method<SCAPIX_META_STRING("onAudioDevicesAdded"), void>(addedDevices); }
inline void AudioDeviceCallback::onAudioDevicesRemoved(ref<link::java::array<android::media::AudioDeviceInfo>> removedDevices) { return call_method<SCAPIX_META_STRING("onAudioDevicesRemoved"), void>(removedDevices); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_AUDIODEVICECALLBACK_H
