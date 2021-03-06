// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_PATH_DIRECTION_H
#define SCAPIX_ANDROID_GRAPHICS_PATH_DIRECTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::graphics {

class Path_Direction : public object_base<SCAPIX_META_STRING("android/graphics/Path$Direction"),
	java::lang::Enum>
{
public:

	static ref<android::graphics::Path_Direction> CW_();
	static ref<android::graphics::Path_Direction> CCW_();

	static ref<link::java::array<android::graphics::Path_Direction>> values();
	static ref<android::graphics::Path_Direction> valueOf(ref<java::lang::String> name);

protected:

	Path_Direction(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::graphics::Path_Direction> Path_Direction::CW_() { return get_static_field<SCAPIX_META_STRING("CW"), ref<android::graphics::Path_Direction>>(); }
inline ref<android::graphics::Path_Direction> Path_Direction::CCW_() { return get_static_field<SCAPIX_META_STRING("CCW"), ref<android::graphics::Path_Direction>>(); }
inline ref<link::java::array<android::graphics::Path_Direction>> Path_Direction::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::graphics::Path_Direction>>>(); }
inline ref<android::graphics::Path_Direction> Path_Direction::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Path_Direction>>(name); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_PATH_DIRECTION_H
