// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>

#ifndef SCAPIX_ANDROID_OS_PARCELABLE_CLASSLOADERCREATOR_H
#define SCAPIX_ANDROID_OS_PARCELABLE_CLASSLOADERCREATOR_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace java::lang { class ClassLoader; }

namespace android::os {

class Parcelable_ClassLoaderCreator : public object_base<SCAPIX_META_STRING("android/os/Parcelable$ClassLoaderCreator"),
	java::lang::Object,
	android::os::Parcelable_Creator>
{
public:

	ref<java::lang::Object> createFromParcel(ref<android::os::Parcel> p1, ref<java::lang::ClassLoader> p2);

protected:

	Parcelable_ClassLoaderCreator(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/ClassLoader.h>

namespace scapix::java_api {
namespace android::os {

inline ref<java::lang::Object> Parcelable_ClassLoaderCreator::createFromParcel(ref<android::os::Parcel> p1, ref<java::lang::ClassLoader> p2) { return call_method<SCAPIX_META_STRING("createFromParcel"), ref<java::lang::Object>>(p1, p2); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_PARCELABLE_CLASSLOADERCREATOR_H
