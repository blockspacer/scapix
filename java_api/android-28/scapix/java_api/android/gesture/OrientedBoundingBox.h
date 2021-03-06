// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GESTURE_ORIENTEDBOUNDINGBOX_H
#define SCAPIX_ANDROID_GESTURE_ORIENTEDBOUNDINGBOX_H

namespace scapix::java_api {
namespace android::gesture {

class OrientedBoundingBox : public object_base<SCAPIX_META_STRING("android/gesture/OrientedBoundingBox"),
	java::lang::Object>
{
public:

	jfloat centerX();
	jfloat centerY();
	jfloat height();
	jfloat orientation();
	jfloat squareness();
	jfloat width();


protected:

	OrientedBoundingBox(handle_type h) : base_(h) {}

};

} // namespace android::gesture
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::gesture {

inline jfloat OrientedBoundingBox::centerX() { return get_field<SCAPIX_META_STRING("centerX"), jfloat>(); }
inline jfloat OrientedBoundingBox::centerY() { return get_field<SCAPIX_META_STRING("centerY"), jfloat>(); }
inline jfloat OrientedBoundingBox::height() { return get_field<SCAPIX_META_STRING("height"), jfloat>(); }
inline jfloat OrientedBoundingBox::orientation() { return get_field<SCAPIX_META_STRING("orientation"), jfloat>(); }
inline jfloat OrientedBoundingBox::squareness() { return get_field<SCAPIX_META_STRING("squareness"), jfloat>(); }
inline jfloat OrientedBoundingBox::width() { return get_field<SCAPIX_META_STRING("width"), jfloat>(); }

} // namespace android::gesture
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GESTURE_ORIENTEDBOUNDINGBOX_H
