#include <linux/usb/ch9.h>

// 定義USB Audio Class設備描述符
struct usb_device_descriptor audio_dev_desc = {
    .bLength = USB_DT_DEVICE_SIZE,
    .bDescriptorType = USB_DT_DEVICE,
    .bcdUSB = cpu_to_le16(0x0200), // USB規範版本，這裡使用USB 2.0
    .bDeviceClass = USB_CLASS_AUDIO, // USB Audio Class
    .bDeviceSubClass = 0x00,
    .bDeviceProtocol = 0x00,
    .bMaxPacketSize0 = 64, // 最大控制端點封包大小
    .idVendor = cpu_to_le16(0x1234), // 供應商ID，這裡使用虛擬值
    .idProduct = cpu_to_le16(0x5678), // 產品ID，這裡使用虛擬值
    .bcdDevice = cpu_to_le16(0x0100), // 設備版本號，這裡使用1.0
    .iManufacturer = 0x01, // 供應商描述符的索引
    .iProduct = 0x02, // 產品描述符的索引
    .iSerialNumber = 0x00,
    .bNumConfigurations = 0x01 // 配置數量
};
