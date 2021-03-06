// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/companion/DeviceFilter.h>

#ifndef SCAPIX_ANDROID_COMPANION_WIFIDEVICEFILTER_H
#define SCAPIX_ANDROID_COMPANION_WIFIDEVICEFILTER_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace android::companion { class WifiDeviceFilter_Builder; }

namespace android::companion {

class WifiDeviceFilter : public object_base<SCAPIX_META_STRING("android/companion/WifiDeviceFilter"),
	java::lang::Object,
	android::companion::DeviceFilter>
{
public:

	using Builder = WifiDeviceFilter_Builder;

	static ref<android::os::Parcelable_Creator> CREATOR_();

	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint describeContents();

protected:

	WifiDeviceFilter(handle_type h) : base_(h) {}

};

} // namespace android::companion
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>

namespace scapix::java_api {
namespace android::companion {

inline ref<android::os::Parcelable_Creator> WifiDeviceFilter::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jboolean WifiDeviceFilter::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint WifiDeviceFilter::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline void WifiDeviceFilter::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint WifiDeviceFilter::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }

} // namespace android::companion
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_COMPANION_WIFIDEVICEFILTER_H
