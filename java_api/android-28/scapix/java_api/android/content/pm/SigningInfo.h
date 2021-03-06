// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_PM_SIGNINGINFO_H
#define SCAPIX_ANDROID_CONTENT_PM_SIGNINGINFO_H

namespace scapix::java_api {

namespace android::content::pm { class Signature; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }

namespace android::content::pm {

class SigningInfo : public object_base<SCAPIX_META_STRING("android/content/pm/SigningInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();

	static ref<SigningInfo> new_object();
	static ref<SigningInfo> new_object(ref<android::content::pm::SigningInfo> orig);
	jboolean hasMultipleSigners();
	jboolean hasPastSigningCertificates();
	ref<link::java::array<android::content::pm::Signature>> getSigningCertificateHistory();
	ref<link::java::array<android::content::pm::Signature>> getApkContentsSigners();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags);

protected:

	SigningInfo(handle_type h) : base_(h) {}

};

} // namespace android::content::pm
} // namespace scapix::java_api

#include <scapix/java_api/android/content/pm/Signature.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>

namespace scapix::java_api {
namespace android::content::pm {

inline ref<android::os::Parcelable_Creator> SigningInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<SigningInfo> SigningInfo::new_object() { return base_::new_object(); }
inline ref<SigningInfo> SigningInfo::new_object(ref<android::content::pm::SigningInfo> orig) { return base_::new_object(orig); }
inline jboolean SigningInfo::hasMultipleSigners() { return call_method<SCAPIX_META_STRING("hasMultipleSigners"), jboolean>(); }
inline jboolean SigningInfo::hasPastSigningCertificates() { return call_method<SCAPIX_META_STRING("hasPastSigningCertificates"), jboolean>(); }
inline ref<link::java::array<android::content::pm::Signature>> SigningInfo::getSigningCertificateHistory() { return call_method<SCAPIX_META_STRING("getSigningCertificateHistory"), ref<link::java::array<android::content::pm::Signature>>>(); }
inline ref<link::java::array<android::content::pm::Signature>> SigningInfo::getApkContentsSigners() { return call_method<SCAPIX_META_STRING("getApkContentsSigners"), ref<link::java::array<android::content::pm::Signature>>>(); }
inline jint SigningInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void SigningInfo::writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, parcelableFlags); }

} // namespace android::content::pm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_PM_SIGNINGINFO_H
