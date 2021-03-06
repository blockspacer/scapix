// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/ActionBar_LayoutParams.h>

#ifndef SCAPIX_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS_H
#define SCAPIX_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace android::view { class ViewGroup_LayoutParams; }
namespace android::view { class ViewGroup_MarginLayoutParams; }

namespace android::widget {

class Toolbar_LayoutParams : public object_base<SCAPIX_META_STRING("android/widget/Toolbar$LayoutParams"),
	android::app::ActionBar_LayoutParams>
{
public:

	static ref<Toolbar_LayoutParams> new_object(ref<android::content::Context> c, ref<android::util::AttributeSet> attrs);
	static ref<Toolbar_LayoutParams> new_object(jint width, jint height);
	static ref<Toolbar_LayoutParams> new_object(jint width, jint height, jint gravity);
	static ref<Toolbar_LayoutParams> new_object(jint gravity);
	static ref<Toolbar_LayoutParams> new_object(ref<android::widget::Toolbar_LayoutParams> source);
	static ref<Toolbar_LayoutParams> new_object(ref<android::app::ActionBar_LayoutParams> source);
	static ref<Toolbar_LayoutParams> new_object(ref<android::view::ViewGroup_MarginLayoutParams> source);
	static ref<Toolbar_LayoutParams> new_object(ref<android::view::ViewGroup_LayoutParams> source);

protected:

	Toolbar_LayoutParams(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/ViewGroup_MarginLayoutParams.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<Toolbar_LayoutParams> Toolbar_LayoutParams::new_object(ref<android::content::Context> c, ref<android::util::AttributeSet> attrs) { return base_::new_object(c, attrs); }
inline ref<Toolbar_LayoutParams> Toolbar_LayoutParams::new_object(jint width, jint height) { return base_::new_object(width, height); }
inline ref<Toolbar_LayoutParams> Toolbar_LayoutParams::new_object(jint width, jint height, jint gravity) { return base_::new_object(width, height, gravity); }
inline ref<Toolbar_LayoutParams> Toolbar_LayoutParams::new_object(jint gravity) { return base_::new_object(gravity); }
inline ref<Toolbar_LayoutParams> Toolbar_LayoutParams::new_object(ref<android::widget::Toolbar_LayoutParams> source) { return base_::new_object(source); }
inline ref<Toolbar_LayoutParams> Toolbar_LayoutParams::new_object(ref<android::app::ActionBar_LayoutParams> source) { return base_::new_object(source); }
inline ref<Toolbar_LayoutParams> Toolbar_LayoutParams::new_object(ref<android::view::ViewGroup_MarginLayoutParams> source) { return base_::new_object(source); }
inline ref<Toolbar_LayoutParams> Toolbar_LayoutParams::new_object(ref<android::view::ViewGroup_LayoutParams> source) { return base_::new_object(source); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS_H
