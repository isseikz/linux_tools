#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc6c01fa, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3fe15710, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5a82c44a, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x32dd56a8, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x16abfc10, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x9a1604bc, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x1846825f, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6d6ba234, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xb2fc44b3, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x4552385f, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x6dc0c9dc, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xb7eb0c3d, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc3a55c7b, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xc4fb83e, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x28438de8, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x9b18c7b6, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7d9cc03b, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x70c5b00c, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x75e82745, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfff0707c, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x82a0e628, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0xaf9a23f9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xe452f693, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x8cca5c63, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x8d657ab9, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3e3a0d93, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc03017e0, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x95092e22, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xcae92838, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x391afe42, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x56adb695, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9b9b83a5, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xaf69df35, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x90e5b895, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xec4429ba, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb09ae470, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x8cb1e907, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0xce9a8441, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xdca08f9b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x62340db5, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x40ec2053, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xd356be18, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0x3f51808, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3aec4d33, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x9c44ee5c, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x933519e0, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xa374bc15, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x2538b89c, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x5ec7fbb7, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x6c0fa142, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xb01f4263, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x9fb5336f, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c34c227, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x69af87a5, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x7fda8e06, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x9ff7602d, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0xe4d4ccfb, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xeebc9775, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcb743f45, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5c34b4c4, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xedd3a6db, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xc858e287, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x148229db, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfe041416, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xc1377a4b, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xfd6d6d06, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xc1209f3f, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xfc804189, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x16f83b68, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x56693ffc, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x36c8811, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xda0fc4aa, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xea3e75f5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xa02368ae, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x1493a5bd, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x810254a5, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x63d2f697, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p805Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p025Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v056Ep400Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0953d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3318d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C5168ADA6DB30701FFE4870");
