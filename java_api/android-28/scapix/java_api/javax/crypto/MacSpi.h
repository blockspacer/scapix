// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_CRYPTO_MACSPI_H
#define SCAPIX_JAVAX_CRYPTO_MACSPI_H

namespace scapix::java_api {
namespace javax::crypto {

class MacSpi : public object_base<SCAPIX_META_STRING("javax/crypto/MacSpi"),
	java::lang::Object>
{
public:

	static ref<MacSpi> new_object();
	ref<java::lang::Object> clone();

protected:

	MacSpi(handle_type h) : base_(h) {}

};

} // namespace javax::crypto
} // namespace scapix::java_api


namespace scapix::java_api {
namespace javax::crypto {

inline ref<MacSpi> MacSpi::new_object() { return base_::new_object(); }
inline ref<java::lang::Object> MacSpi::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }

} // namespace javax::crypto
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_CRYPTO_MACSPI_H
