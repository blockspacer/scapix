// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVERCALLBACK_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVERCALLBACK_H

namespace scapix::java_api {

namespace android::bluetooth { class BluetoothDevice; }
namespace android::bluetooth { class BluetoothGattCharacteristic; }
namespace android::bluetooth { class BluetoothGattDescriptor; }
namespace android::bluetooth { class BluetoothGattService; }

namespace android::bluetooth {

class BluetoothGattServerCallback : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothGattServerCallback"),
	java::lang::Object>
{
public:

	static ref<BluetoothGattServerCallback> new_object();
	void onConnectionStateChange(ref<android::bluetooth::BluetoothDevice> device, jint status, jint newState);
	void onServiceAdded(jint status, ref<android::bluetooth::BluetoothGattService> service);
	void onCharacteristicReadRequest(ref<android::bluetooth::BluetoothDevice> device, jint requestId, jint offset, ref<android::bluetooth::BluetoothGattCharacteristic> characteristic);
	void onCharacteristicWriteRequest(ref<android::bluetooth::BluetoothDevice> device, jint requestId, ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jboolean preparedWrite, jboolean responseNeeded, jint offset, ref<link::java::array<jbyte>> value);
	void onDescriptorReadRequest(ref<android::bluetooth::BluetoothDevice> device, jint requestId, jint offset, ref<android::bluetooth::BluetoothGattDescriptor> descriptor);
	void onDescriptorWriteRequest(ref<android::bluetooth::BluetoothDevice> device, jint requestId, ref<android::bluetooth::BluetoothGattDescriptor> descriptor, jboolean preparedWrite, jboolean responseNeeded, jint offset, ref<link::java::array<jbyte>> value);
	void onExecuteWrite(ref<android::bluetooth::BluetoothDevice> device, jint requestId, jboolean execute);
	void onNotificationSent(ref<android::bluetooth::BluetoothDevice> device, jint status);
	void onMtuChanged(ref<android::bluetooth::BluetoothDevice> device, jint mtu);
	void onPhyUpdate(ref<android::bluetooth::BluetoothDevice> device, jint txPhy, jint rxPhy, jint status);
	void onPhyRead(ref<android::bluetooth::BluetoothDevice> device, jint txPhy, jint rxPhy, jint status);

protected:

	BluetoothGattServerCallback(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api

#include <scapix/java_api/android/bluetooth/BluetoothDevice.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattCharacteristic.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattDescriptor.h>
#include <scapix/java_api/android/bluetooth/BluetoothGattService.h>

namespace scapix::java_api {
namespace android::bluetooth {

inline ref<BluetoothGattServerCallback> BluetoothGattServerCallback::new_object() { return base_::new_object(); }
inline void BluetoothGattServerCallback::onConnectionStateChange(ref<android::bluetooth::BluetoothDevice> device, jint status, jint newState) { return call_method<SCAPIX_META_STRING("onConnectionStateChange"), void>(device, status, newState); }
inline void BluetoothGattServerCallback::onServiceAdded(jint status, ref<android::bluetooth::BluetoothGattService> service) { return call_method<SCAPIX_META_STRING("onServiceAdded"), void>(status, service); }
inline void BluetoothGattServerCallback::onCharacteristicReadRequest(ref<android::bluetooth::BluetoothDevice> device, jint requestId, jint offset, ref<android::bluetooth::BluetoothGattCharacteristic> characteristic) { return call_method<SCAPIX_META_STRING("onCharacteristicReadRequest"), void>(device, requestId, offset, characteristic); }
inline void BluetoothGattServerCallback::onCharacteristicWriteRequest(ref<android::bluetooth::BluetoothDevice> device, jint requestId, ref<android::bluetooth::BluetoothGattCharacteristic> characteristic, jboolean preparedWrite, jboolean responseNeeded, jint offset, ref<link::java::array<jbyte>> value) { return call_method<SCAPIX_META_STRING("onCharacteristicWriteRequest"), void>(device, requestId, characteristic, preparedWrite, responseNeeded, offset, value); }
inline void BluetoothGattServerCallback::onDescriptorReadRequest(ref<android::bluetooth::BluetoothDevice> device, jint requestId, jint offset, ref<android::bluetooth::BluetoothGattDescriptor> descriptor) { return call_method<SCAPIX_META_STRING("onDescriptorReadRequest"), void>(device, requestId, offset, descriptor); }
inline void BluetoothGattServerCallback::onDescriptorWriteRequest(ref<android::bluetooth::BluetoothDevice> device, jint requestId, ref<android::bluetooth::BluetoothGattDescriptor> descriptor, jboolean preparedWrite, jboolean responseNeeded, jint offset, ref<link::java::array<jbyte>> value) { return call_method<SCAPIX_META_STRING("onDescriptorWriteRequest"), void>(device, requestId, descriptor, preparedWrite, responseNeeded, offset, value); }
inline void BluetoothGattServerCallback::onExecuteWrite(ref<android::bluetooth::BluetoothDevice> device, jint requestId, jboolean execute) { return call_method<SCAPIX_META_STRING("onExecuteWrite"), void>(device, requestId, execute); }
inline void BluetoothGattServerCallback::onNotificationSent(ref<android::bluetooth::BluetoothDevice> device, jint status) { return call_method<SCAPIX_META_STRING("onNotificationSent"), void>(device, status); }
inline void BluetoothGattServerCallback::onMtuChanged(ref<android::bluetooth::BluetoothDevice> device, jint mtu) { return call_method<SCAPIX_META_STRING("onMtuChanged"), void>(device, mtu); }
inline void BluetoothGattServerCallback::onPhyUpdate(ref<android::bluetooth::BluetoothDevice> device, jint txPhy, jint rxPhy, jint status) { return call_method<SCAPIX_META_STRING("onPhyUpdate"), void>(device, txPhy, rxPhy, status); }
inline void BluetoothGattServerCallback::onPhyRead(ref<android::bluetooth::BluetoothDevice> device, jint txPhy, jint rxPhy, jint status) { return call_method<SCAPIX_META_STRING("onPhyRead"), void>(device, txPhy, rxPhy, status); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHGATTSERVERCALLBACK_H
