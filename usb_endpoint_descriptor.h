#include <linux/usb/ch9.h>

// 定義USB Audio Class的端點配置
struct usb_endpoint_descriptor audio_endpoint_desc = {
    .bLength = USB_DT_ENDPOINT_AUDIO_SIZE,
    .bDescriptorType = USB_DT_ENDPOINT,
    .bEndpointAddress = USB_DIR_IN | 1, // 端點地址，這裡使用傳入方向，端點號為1
    .bmAttributes = USB_ENDPOINT_XFER_ISOC, // 端點傳輸類型為等時同步傳輸（isochronous）
    .wMaxPacketSize = cpu_to_le16(192), // 最大數據封包大小
    .bInterval = 1, // 傳輸間隔
    .bRefresh = 0,
    .bSynchAddress = 0
};
