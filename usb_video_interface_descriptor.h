#include <linux/usb/video.h>

// 定義USB Video Class介面描述符
struct usb_interface_descriptor video_intf_desc = {
    .bLength = sizeof(struct usb_interface_descriptor),
    .bDescriptorType = USB_DT_INTERFACE,
    .bInterfaceNumber = 0x00, // 介面號
    .bAlternateSetting = 0x00,
    .bNumEndpoints = 0x01, // 端點數量
    .bInterfaceClass = USB_CLASS_VIDEO, // USB Video Class
    .bInterfaceSubClass = USB_SUBCLASS_VIDEO_CONTROL,
    .bInterfaceProtocol = USB_PROTOCOL_VIDEO_CONTROL,
    .iInterface = 0x00
};
