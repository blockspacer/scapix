// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_UTIL_PREFS_NODECHANGELISTENER_H
#define SCAPIX_JAVA_UTIL_PREFS_NODECHANGELISTENER_H

namespace scapix::java_api {

namespace java::util::prefs { class NodeChangeEvent; }

namespace java::util::prefs {

class NodeChangeListener : public object_base<SCAPIX_META_STRING("java/util/prefs/NodeChangeListener"),
	java::lang::Object,
	java::util::EventListener>
{
public:

	void childAdded(ref<java::util::prefs::NodeChangeEvent> p1);
	void childRemoved(ref<java::util::prefs::NodeChangeEvent> p1);

protected:

	NodeChangeListener(handle_type h) : base_(h) {}

};

} // namespace java::util::prefs
} // namespace scapix::java_api

#include <scapix/java_api/java/util/prefs/NodeChangeEvent.h>

namespace scapix::java_api {
namespace java::util::prefs {

inline void NodeChangeListener::childAdded(ref<java::util::prefs::NodeChangeEvent> p1) { return call_method<SCAPIX_META_STRING("childAdded"), void>(p1); }
inline void NodeChangeListener::childRemoved(ref<java::util::prefs::NodeChangeEvent> p1) { return call_method<SCAPIX_META_STRING("childRemoved"), void>(p1); }

} // namespace java::util::prefs
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_PREFS_NODECHANGELISTENER_H
