#include <linux/usb/audio.h>

// 定義USB Audio Class音頻功能描述符
struct usb_audio_streaming_interface_descriptor audio_streaming_intf_desc = {
    .bLength = sizeof(struct usb_audio_streaming_interface_descriptor),
    .bDescriptorType = USB_DT_CS_INTERFACE,
    .bDescriptorSubtype = UAC_HEADER,
    .bTerminalLink = 0x01, // 關聯的終端描述符索引
    .bFormatType = UAC_FORMAT_TYPE_I,
    .bNrChannels = 2, // 聲道數量
    .bSubframeSize = 2, // 子帧大小（每個聲道的位數）
    .bBitResolution = 16, // 位解析度
    .bSamFreqType = 3, // 可支持的採樣率數量
    .tSamFreq[0] = cpu_to_le32(48000), // 採樣率1
    .tSamFreq[1] = cpu_to_le32(44100), // 採樣率2
    .tSamFreq[2] = cpu_to_le32(32000) // 採樣率3
};
