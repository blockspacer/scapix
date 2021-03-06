// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/FloatBuffer.h>

#ifndef SCAPIX_JAVA_NIO_HEAPFLOATBUFFER_H
#define SCAPIX_JAVA_NIO_HEAPFLOATBUFFER_H

namespace scapix::java_api {

namespace java::nio { class ByteOrder; }

namespace java::nio {

// private
class HeapFloatBuffer : public object_base<SCAPIX_META_STRING("java/nio/HeapFloatBuffer"),
	java::nio::FloatBuffer>
{
public:

	ref<java::nio::FloatBuffer> slice();
	ref<java::nio::FloatBuffer> duplicate();
	ref<java::nio::FloatBuffer> asReadOnlyBuffer();
	jfloat get();
	jfloat get(jint i);
	ref<java::nio::FloatBuffer> get(ref<link::java::array<jfloat>> dst, jint offset, jint length);
	jboolean isDirect();
	jboolean isReadOnly();
	ref<java::nio::FloatBuffer> put(jfloat x);
	ref<java::nio::FloatBuffer> put(jint i, jfloat x);
	ref<java::nio::FloatBuffer> put(ref<link::java::array<jfloat>> src, jint offset, jint length);
	ref<java::nio::FloatBuffer> put(ref<java::nio::FloatBuffer> src);
	ref<java::nio::FloatBuffer> compact();
	ref<java::nio::ByteOrder> order();

protected:

	HeapFloatBuffer(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/ByteOrder.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::FloatBuffer> HeapFloatBuffer::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::FloatBuffer>>(); }
inline ref<java::nio::FloatBuffer> HeapFloatBuffer::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::FloatBuffer>>(); }
inline ref<java::nio::FloatBuffer> HeapFloatBuffer::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::FloatBuffer>>(); }
inline jfloat HeapFloatBuffer::get() { return call_method<SCAPIX_META_STRING("get"), jfloat>(); }
inline jfloat HeapFloatBuffer::get(jint i) { return call_method<SCAPIX_META_STRING("get"), jfloat>(i); }
inline ref<java::nio::FloatBuffer> HeapFloatBuffer::get(ref<link::java::array<jfloat>> dst, jint offset, jint length) { return call_method<SCAPIX_META_STRING("get"), ref<java::nio::FloatBuffer>>(dst, offset, length); }
inline jboolean HeapFloatBuffer::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline jboolean HeapFloatBuffer::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::nio::FloatBuffer> HeapFloatBuffer::put(jfloat x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(x); }
inline ref<java::nio::FloatBuffer> HeapFloatBuffer::put(jint i, jfloat x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(i, x); }
inline ref<java::nio::FloatBuffer> HeapFloatBuffer::put(ref<link::java::array<jfloat>> src, jint offset, jint length) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(src, offset, length); }
inline ref<java::nio::FloatBuffer> HeapFloatBuffer::put(ref<java::nio::FloatBuffer> src) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::FloatBuffer>>(src); }
inline ref<java::nio::FloatBuffer> HeapFloatBuffer::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::FloatBuffer>>(); }
inline ref<java::nio::ByteOrder> HeapFloatBuffer::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_HEAPFLOATBUFFER_H
