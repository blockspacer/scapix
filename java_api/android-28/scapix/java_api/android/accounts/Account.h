// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_ACCOUNTS_ACCOUNT_H
#define SCAPIX_ANDROID_ACCOUNTS_ACCOUNT_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::accounts {

class Account : public object_base<SCAPIX_META_STRING("android/accounts/Account"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	ref<java::lang::String> name();
	ref<java::lang::String> type();

	static ref<Account> new_object(ref<java::lang::String> name, ref<java::lang::String> type);
	static ref<Account> new_object(ref<android::os::Parcel> in);
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	ref<java::lang::String> toString();

protected:

	Account(handle_type h) : base_(h) {}

};

} // namespace android::accounts
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::accounts {

inline ref<android::os::Parcelable_Creator> Account::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<java::lang::String> Account::name() { return get_field<SCAPIX_META_STRING("name"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Account::type() { return get_field<SCAPIX_META_STRING("type"), ref<java::lang::String>>(); }
inline ref<Account> Account::new_object(ref<java::lang::String> name, ref<java::lang::String> type) { return base_::new_object(name, type); }
inline ref<Account> Account::new_object(ref<android::os::Parcel> in) { return base_::new_object(in); }
inline jboolean Account::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint Account::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint Account::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void Account::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline ref<java::lang::String> Account::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::accounts
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ACCOUNTS_ACCOUNT_H
