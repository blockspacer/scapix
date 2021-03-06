// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_ANDROID_ANIMATION_KEYFRAME_H
#define SCAPIX_ANDROID_ANIMATION_KEYFRAME_H

namespace scapix::java_api {

namespace android::animation { class TimeInterpolator; }
namespace java::lang { class Class; }

namespace android::animation {

class Keyframe : public object_base<SCAPIX_META_STRING("android/animation/Keyframe"),
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static ref<Keyframe> new_object();
	static ref<android::animation::Keyframe> ofInt(jfloat fraction, jint value);
	static ref<android::animation::Keyframe> ofInt(jfloat fraction);
	static ref<android::animation::Keyframe> ofFloat(jfloat fraction, jfloat value);
	static ref<android::animation::Keyframe> ofFloat(jfloat fraction);
	static ref<android::animation::Keyframe> ofObject(jfloat fraction, ref<java::lang::Object> value);
	static ref<android::animation::Keyframe> ofObject(jfloat fraction);
	jboolean hasValue();
	ref<java::lang::Object> getValue();
	void setValue(ref<java::lang::Object> p1);
	jfloat getFraction();
	void setFraction(jfloat fraction);
	ref<android::animation::TimeInterpolator> getInterpolator();
	void setInterpolator(ref<android::animation::TimeInterpolator> interpolator);
	ref<java::lang::Class> getType();
	ref<android::animation::Keyframe> clone();

protected:

	Keyframe(handle_type h) : base_(h) {}

};

} // namespace android::animation
} // namespace scapix::java_api

#include <scapix/java_api/android/animation/TimeInterpolator.h>
#include <scapix/java_api/java/lang/Class.h>

namespace scapix::java_api {
namespace android::animation {

inline ref<Keyframe> Keyframe::new_object() { return base_::new_object(); }
inline ref<android::animation::Keyframe> Keyframe::ofInt(jfloat fraction, jint value) { return call_static_method<SCAPIX_META_STRING("ofInt"), ref<android::animation::Keyframe>>(fraction, value); }
inline ref<android::animation::Keyframe> Keyframe::ofInt(jfloat fraction) { return call_static_method<SCAPIX_META_STRING("ofInt"), ref<android::animation::Keyframe>>(fraction); }
inline ref<android::animation::Keyframe> Keyframe::ofFloat(jfloat fraction, jfloat value) { return call_static_method<SCAPIX_META_STRING("ofFloat"), ref<android::animation::Keyframe>>(fraction, value); }
inline ref<android::animation::Keyframe> Keyframe::ofFloat(jfloat fraction) { return call_static_method<SCAPIX_META_STRING("ofFloat"), ref<android::animation::Keyframe>>(fraction); }
inline ref<android::animation::Keyframe> Keyframe::ofObject(jfloat fraction, ref<java::lang::Object> value) { return call_static_method<SCAPIX_META_STRING("ofObject"), ref<android::animation::Keyframe>>(fraction, value); }
inline ref<android::animation::Keyframe> Keyframe::ofObject(jfloat fraction) { return call_static_method<SCAPIX_META_STRING("ofObject"), ref<android::animation::Keyframe>>(fraction); }
inline jboolean Keyframe::hasValue() { return call_method<SCAPIX_META_STRING("hasValue"), jboolean>(); }
inline ref<java::lang::Object> Keyframe::getValue() { return call_method<SCAPIX_META_STRING("getValue"), ref<java::lang::Object>>(); }
inline void Keyframe::setValue(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("setValue"), void>(p1); }
inline jfloat Keyframe::getFraction() { return call_method<SCAPIX_META_STRING("getFraction"), jfloat>(); }
inline void Keyframe::setFraction(jfloat fraction) { return call_method<SCAPIX_META_STRING("setFraction"), void>(fraction); }
inline ref<android::animation::TimeInterpolator> Keyframe::getInterpolator() { return call_method<SCAPIX_META_STRING("getInterpolator"), ref<android::animation::TimeInterpolator>>(); }
inline void Keyframe::setInterpolator(ref<android::animation::TimeInterpolator> interpolator) { return call_method<SCAPIX_META_STRING("setInterpolator"), void>(interpolator); }
inline ref<java::lang::Class> Keyframe::getType() { return call_method<SCAPIX_META_STRING("getType"), ref<java::lang::Class>>(); }
inline ref<android::animation::Keyframe> Keyframe::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<android::animation::Keyframe>>(); }

} // namespace android::animation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ANIMATION_KEYFRAME_H
