// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE_H
#define SCAPIX_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE_H

namespace scapix::java_api {

namespace android::content { class Intent; }
namespace android::content::res { class Configuration; }
namespace android::os { class Bundle; }
namespace android::os { class IBinder; }
namespace android::service::voice { class VoiceInteractionSession; }

namespace android::service::voice {

class VoiceInteractionSessionService : public object_base<SCAPIX_META_STRING("android/service/voice/VoiceInteractionSessionService"),
	android::app::Service>
{
public:

	static ref<VoiceInteractionSessionService> new_object();
	void onCreate();
	ref<android::service::voice::VoiceInteractionSession> onNewSession(ref<android::os::Bundle> p1);
	ref<android::os::IBinder> onBind(ref<android::content::Intent> intent);
	void onConfigurationChanged(ref<android::content::res::Configuration> newConfig);
	void onLowMemory();
	void onTrimMemory(jint level);

protected:

	VoiceInteractionSessionService(handle_type h) : base_(h) {}

};

} // namespace android::service::voice
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/res/Configuration.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/service/voice/VoiceInteractionSession.h>

namespace scapix::java_api {
namespace android::service::voice {

inline ref<VoiceInteractionSessionService> VoiceInteractionSessionService::new_object() { return base_::new_object(); }
inline void VoiceInteractionSessionService::onCreate() { return call_method<SCAPIX_META_STRING("onCreate"), void>(); }
inline ref<android::service::voice::VoiceInteractionSession> VoiceInteractionSessionService::onNewSession(ref<android::os::Bundle> p1) { return call_method<SCAPIX_META_STRING("onNewSession"), ref<android::service::voice::VoiceInteractionSession>>(p1); }
inline ref<android::os::IBinder> VoiceInteractionSessionService::onBind(ref<android::content::Intent> intent) { return call_method<SCAPIX_META_STRING("onBind"), ref<android::os::IBinder>>(intent); }
inline void VoiceInteractionSessionService::onConfigurationChanged(ref<android::content::res::Configuration> newConfig) { return call_method<SCAPIX_META_STRING("onConfigurationChanged"), void>(newConfig); }
inline void VoiceInteractionSessionService::onLowMemory() { return call_method<SCAPIX_META_STRING("onLowMemory"), void>(); }
inline void VoiceInteractionSessionService::onTrimMemory(jint level) { return call_method<SCAPIX_META_STRING("onTrimMemory"), void>(level); }

} // namespace android::service::voice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSIONSERVICE_H
