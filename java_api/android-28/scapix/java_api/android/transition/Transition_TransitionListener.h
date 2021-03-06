// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TRANSITION_TRANSITION_TRANSITIONLISTENER_H
#define SCAPIX_ANDROID_TRANSITION_TRANSITION_TRANSITIONLISTENER_H

namespace scapix::java_api {

namespace android::transition { class Transition; }

namespace android::transition {

class Transition_TransitionListener : public object_base<SCAPIX_META_STRING("android/transition/Transition$TransitionListener"),
	java::lang::Object>
{
public:

	void onTransitionStart(ref<android::transition::Transition> p1);
	void onTransitionEnd(ref<android::transition::Transition> p1);
	void onTransitionCancel(ref<android::transition::Transition> p1);
	void onTransitionPause(ref<android::transition::Transition> p1);
	void onTransitionResume(ref<android::transition::Transition> p1);

protected:

	Transition_TransitionListener(handle_type h) : base_(h) {}

};

} // namespace android::transition
} // namespace scapix::java_api

#include <scapix/java_api/android/transition/Transition.h>

namespace scapix::java_api {
namespace android::transition {

inline void Transition_TransitionListener::onTransitionStart(ref<android::transition::Transition> p1) { return call_method<SCAPIX_META_STRING("onTransitionStart"), void>(p1); }
inline void Transition_TransitionListener::onTransitionEnd(ref<android::transition::Transition> p1) { return call_method<SCAPIX_META_STRING("onTransitionEnd"), void>(p1); }
inline void Transition_TransitionListener::onTransitionCancel(ref<android::transition::Transition> p1) { return call_method<SCAPIX_META_STRING("onTransitionCancel"), void>(p1); }
inline void Transition_TransitionListener::onTransitionPause(ref<android::transition::Transition> p1) { return call_method<SCAPIX_META_STRING("onTransitionPause"), void>(p1); }
inline void Transition_TransitionListener::onTransitionResume(ref<android::transition::Transition> p1) { return call_method<SCAPIX_META_STRING("onTransitionResume"), void>(p1); }

} // namespace android::transition
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TRANSITION_TRANSITION_TRANSITIONLISTENER_H
