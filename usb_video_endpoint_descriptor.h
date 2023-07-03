#include <linux/usb/ch9.h>

// 定義USB Video Class的端點描述符
struct usb_endpoint_descriptor video_endpoint_desc = {
    .bLength = USB_DT_ENDPOINT_SIZE,
    .bDescriptorType = USB_DT_ENDPOINT,
    .bEndpointAddress = USB_DIR_IN | 1, // 端點地址，這裡使用傳入方向，端點號為1
    .bmAttributes = USB_ENDPOINT_XFER_ISOC, // 端點傳輸類型為等時同步傳輸（isochronous）
    .wMaxPacketSize = cpu_to_le16(3072), // 最大數據封包大小
    .bInterval = 1, // 傳輸間隔
    .bRefresh = 0,
    .bSynchAddress = 0
};
