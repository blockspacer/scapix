// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/net/AbstractPlainSocketImpl.h>

#ifndef SCAPIX_JAVA_NET_PLAINSOCKETIMPL_H
#define SCAPIX_JAVA_NET_PLAINSOCKETIMPL_H

namespace scapix::java_api {

namespace java::io { class FileDescriptor; }

namespace java::net {

// private
class PlainSocketImpl : public object_base<SCAPIX_META_STRING("java/net/PlainSocketImpl"),
	java::net::AbstractPlainSocketImpl>
{
public:

	static ref<PlainSocketImpl> new_object();
	static ref<PlainSocketImpl> new_object(ref<java::io::FileDescriptor> fd);

protected:

	PlainSocketImpl(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/io/FileDescriptor.h>

namespace scapix::java_api {
namespace java::net {

inline ref<PlainSocketImpl> PlainSocketImpl::new_object() { return base_::new_object(); }
inline ref<PlainSocketImpl> PlainSocketImpl::new_object(ref<java::io::FileDescriptor> fd) { return base_::new_object(fd); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_PLAINSOCKETIMPL_H
