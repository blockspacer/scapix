// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/VoiceInteractor_Request.h>

#ifndef SCAPIX_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_H
#define SCAPIX_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_H

namespace scapix::java_api {

namespace android::app { class VoiceInteractor_PickOptionRequest_Option; }
namespace android::app { class VoiceInteractor_Prompt; }
namespace android::os { class Bundle; }

namespace android::app {

class VoiceInteractor_PickOptionRequest : public object_base<SCAPIX_META_STRING("android/app/VoiceInteractor$PickOptionRequest"),
	android::app::VoiceInteractor_Request>
{
public:

	using Option = VoiceInteractor_PickOptionRequest_Option;

	static ref<VoiceInteractor_PickOptionRequest> new_object(ref<android::app::VoiceInteractor_Prompt> prompt, ref<link::java::array<android::app::VoiceInteractor_PickOptionRequest_Option>> options, ref<android::os::Bundle> extras);
	void onPickOptionResult(jboolean finished, ref<link::java::array<android::app::VoiceInteractor_PickOptionRequest_Option>> selections, ref<android::os::Bundle> result);

protected:

	VoiceInteractor_PickOptionRequest(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/VoiceInteractor_PickOptionRequest_Option.h>
#include <scapix/java_api/android/app/VoiceInteractor_Prompt.h>
#include <scapix/java_api/android/os/Bundle.h>

namespace scapix::java_api {
namespace android::app {

inline ref<VoiceInteractor_PickOptionRequest> VoiceInteractor_PickOptionRequest::new_object(ref<android::app::VoiceInteractor_Prompt> prompt, ref<link::java::array<android::app::VoiceInteractor_PickOptionRequest_Option>> options, ref<android::os::Bundle> extras) { return base_::new_object(prompt, options, extras); }
inline void VoiceInteractor_PickOptionRequest::onPickOptionResult(jboolean finished, ref<link::java::array<android::app::VoiceInteractor_PickOptionRequest_Option>> selections, ref<android::os::Bundle> result) { return call_method<SCAPIX_META_STRING("onPickOptionResult"), void>(finished, selections, result); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_H
