/* SM-A165F / A165FXXSADZF2 — do not mix with emerald POCO values */
OFFSETS_ENTRY("6.12.38-android16-6-abA165FXXSADZF2-4k",
  .kernel_phys_load=0x40000000, .phys_offset=0x40000000, STRUCT_OFFSETS_6_12,

  .off_init_task=0x0252cf40,
  .off_init_cred=0x02542d10,
  .off_init_uts_ns=0x026b6680,
  .off_empty_zero_page=0x02758000,
  .off_root_task_group=0x02760d80,

  /* selinux_enforcing: absolute VA of selinux_state was 0x27b0540;
     enforcing is typically at +0 inside/near state — VERIFY on device.
     Using selinux_state for now; fix if W1 park fails. */
  .off_selinux_enforcing=0x027b0540,
  .off_kptr_restrict=0x0252b678,
  .off_selinux_blob_sizes=0x018b70e8,
  .off_security_hook_heads=0,

  .off_kmalloc_caches=0x018ad4c0,
  .off_anon_pipe_buf_ops=0x0127f088,

  /* A16 ashmem is Rust (ashmem_rust) — classic C fops not in nm; zero for now */
  .off_ashmem_misc_fops=0,
  .off_ashmem_fops=0,
  .off_ashmem_ioctl=0,
  .off_ashmem_compat_ioctl=0,
  .off_ashmem_mmap=0,
  .off_ashmem_open=0,
  .off_ashmem_release=0,
  .off_ashmem_show_fdinfo=0,

  .off_configfs_read_iter=0x00518b24,
  .off_configfs_bin_write_iter=0x005190d0,
  .off_copy_splice_read=0x004945b8,
  .off_noop_llseek=0x00441664,
  .off_cap_capable_active=0x006ef718,

  .off_slide_nfulnl_logger=0x025221a8,
  .off_slide_loggers_0_1=0x025220e8,
  .off_slide_boot_id=0x028934b0,

  .off_system_unbound_wq=0x018ad250,
  .off_call_usermodehelper_exec_work=0x000f8fdc,
),
