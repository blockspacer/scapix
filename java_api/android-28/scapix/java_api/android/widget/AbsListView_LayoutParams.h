// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>

#ifndef SCAPIX_ANDROID_WIDGET_ABSLISTVIEW_LAYOUTPARAMS_H
#define SCAPIX_ANDROID_WIDGET_ABSLISTVIEW_LAYOUTPARAMS_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }

namespace android::widget {

class AbsListView_LayoutParams : public object_base<SCAPIX_META_STRING("android/widget/AbsListView$LayoutParams"),
	android::view::ViewGroup_LayoutParams>
{
public:

	static ref<AbsListView_LayoutParams> new_object(ref<android::content::Context> c, ref<android::util::AttributeSet> attrs);
	static ref<AbsListView_LayoutParams> new_object(jint w, jint h);
	static ref<AbsListView_LayoutParams> new_object(jint w, jint h, jint viewType);
	static ref<AbsListView_LayoutParams> new_object(ref<android::view::ViewGroup_LayoutParams> source);

protected:

	AbsListView_LayoutParams(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<AbsListView_LayoutParams> AbsListView_LayoutParams::new_object(ref<android::content::Context> c, ref<android::util::AttributeSet> attrs) { return base_::new_object(c, attrs); }
inline ref<AbsListView_LayoutParams> AbsListView_LayoutParams::new_object(jint w, jint h) { return base_::new_object(w, h); }
inline ref<AbsListView_LayoutParams> AbsListView_LayoutParams::new_object(jint w, jint h, jint viewType) { return base_::new_object(w, h, viewType); }
inline ref<AbsListView_LayoutParams> AbsListView_LayoutParams::new_object(ref<android::view::ViewGroup_LayoutParams> source) { return base_::new_object(source); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_ABSLISTVIEW_LAYOUTPARAMS_H
