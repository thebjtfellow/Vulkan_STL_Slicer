#include <vulkan/vulkan.h>


bool vk_init()
{

    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "VulkanSlicer";
    appInfo.pEngineName = "b-jetting";


    VkInstanceCreateInfo instanceInfo = {};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;
    
    VkInstance instance;

    VkResult result =  vkCreateInstance( &instanceInfo, 0, &instance );

    return true;
}
