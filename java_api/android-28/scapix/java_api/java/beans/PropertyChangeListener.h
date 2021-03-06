// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_BEANS_PROPERTYCHANGELISTENER_H
#define SCAPIX_JAVA_BEANS_PROPERTYCHANGELISTENER_H

namespace scapix::java_api {

namespace java::beans { class PropertyChangeEvent; }

namespace java::beans {

class PropertyChangeListener : public object_base<SCAPIX_META_STRING("java/beans/PropertyChangeListener"),
	java::lang::Object,
	java::util::EventListener>
{
public:

	void propertyChange(ref<java::beans::PropertyChangeEvent> p1);

protected:

	PropertyChangeListener(handle_type h) : base_(h) {}

};

} // namespace java::beans
} // namespace scapix::java_api

#include <scapix/java_api/java/beans/PropertyChangeEvent.h>

namespace scapix::java_api {
namespace java::beans {

inline void PropertyChangeListener::propertyChange(ref<java::beans::PropertyChangeEvent> p1) { return call_method<SCAPIX_META_STRING("propertyChange"), void>(p1); }

} // namespace java::beans
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_BEANS_PROPERTYCHANGELISTENER_H
