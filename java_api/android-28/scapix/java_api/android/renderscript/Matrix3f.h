// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_MATRIX3F_H
#define SCAPIX_ANDROID_RENDERSCRIPT_MATRIX3F_H

namespace scapix::java_api {
namespace android::renderscript {

class Matrix3f : public object_base<SCAPIX_META_STRING("android/renderscript/Matrix3f"),
	java::lang::Object>
{
public:

	static ref<Matrix3f> new_object();
	static ref<Matrix3f> new_object(ref<link::java::array<jfloat>> dataArray);
	ref<link::java::array<jfloat>> getArray();
	jfloat get(jint x, jint y);
	void set(jint x, jint y, jfloat v);
	void loadIdentity();
	void load(ref<android::renderscript::Matrix3f> src);
	void loadRotate(jfloat rot, jfloat x, jfloat y, jfloat z);
	void loadRotate(jfloat rot);
	void loadScale(jfloat x, jfloat y);
	void loadScale(jfloat x, jfloat y, jfloat z);
	void loadTranslate(jfloat x, jfloat y);
	void loadMultiply(ref<android::renderscript::Matrix3f> lhs, ref<android::renderscript::Matrix3f> rhs);
	void multiply(ref<android::renderscript::Matrix3f> rhs);
	void rotate(jfloat rot, jfloat x, jfloat y, jfloat z);
	void rotate(jfloat rot);
	void scale(jfloat x, jfloat y);
	void scale(jfloat x, jfloat y, jfloat z);
	void translate(jfloat x, jfloat y);
	void transpose();

protected:

	Matrix3f(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::renderscript {

inline ref<Matrix3f> Matrix3f::new_object() { return base_::new_object(); }
inline ref<Matrix3f> Matrix3f::new_object(ref<link::java::array<jfloat>> dataArray) { return base_::new_object(dataArray); }
inline ref<link::java::array<jfloat>> Matrix3f::getArray() { return call_method<SCAPIX_META_STRING("getArray"), ref<link::java::array<jfloat>>>(); }
inline jfloat Matrix3f::get(jint x, jint y) { return call_method<SCAPIX_META_STRING("get"), jfloat>(x, y); }
inline void Matrix3f::set(jint x, jint y, jfloat v) { return call_method<SCAPIX_META_STRING("set"), void>(x, y, v); }
inline void Matrix3f::loadIdentity() { return call_method<SCAPIX_META_STRING("loadIdentity"), void>(); }
inline void Matrix3f::load(ref<android::renderscript::Matrix3f> src) { return call_method<SCAPIX_META_STRING("load"), void>(src); }
inline void Matrix3f::loadRotate(jfloat rot, jfloat x, jfloat y, jfloat z) { return call_method<SCAPIX_META_STRING("loadRotate"), void>(rot, x, y, z); }
inline void Matrix3f::loadRotate(jfloat rot) { return call_method<SCAPIX_META_STRING("loadRotate"), void>(rot); }
inline void Matrix3f::loadScale(jfloat x, jfloat y) { return call_method<SCAPIX_META_STRING("loadScale"), void>(x, y); }
inline void Matrix3f::loadScale(jfloat x, jfloat y, jfloat z) { return call_method<SCAPIX_META_STRING("loadScale"), void>(x, y, z); }
inline void Matrix3f::loadTranslate(jfloat x, jfloat y) { return call_method<SCAPIX_META_STRING("loadTranslate"), void>(x, y); }
inline void Matrix3f::loadMultiply(ref<android::renderscript::Matrix3f> lhs, ref<android::renderscript::Matrix3f> rhs) { return call_method<SCAPIX_META_STRING("loadMultiply"), void>(lhs, rhs); }
inline void Matrix3f::multiply(ref<android::renderscript::Matrix3f> rhs) { return call_method<SCAPIX_META_STRING("multiply"), void>(rhs); }
inline void Matrix3f::rotate(jfloat rot, jfloat x, jfloat y, jfloat z) { return call_method<SCAPIX_META_STRING("rotate"), void>(rot, x, y, z); }
inline void Matrix3f::rotate(jfloat rot) { return call_method<SCAPIX_META_STRING("rotate"), void>(rot); }
inline void Matrix3f::scale(jfloat x, jfloat y) { return call_method<SCAPIX_META_STRING("scale"), void>(x, y); }
inline void Matrix3f::scale(jfloat x, jfloat y, jfloat z) { return call_method<SCAPIX_META_STRING("scale"), void>(x, y, z); }
inline void Matrix3f::translate(jfloat x, jfloat y) { return call_method<SCAPIX_META_STRING("translate"), void>(x, y); }
inline void Matrix3f::transpose() { return call_method<SCAPIX_META_STRING("transpose"), void>(); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_MATRIX3F_H
