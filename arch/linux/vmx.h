#include <asm/paravirt.h>
#include <asm/virtext.h>
#include <linux/cpumask.h>
#include <linux/gfp.h>
#include <linux/module.h>
#include <linux/tboot.h>

#include "util.h"

<<<<<<< HEAD
typedef struct VMCS_CONFIG {
=======
struct vmcs_config {
>>>>>>> 4e902d123057a22228fd5d8c8c01b809d55658c9
  int size;
  int order;
  u32 revision_id;
  u32 pin_based_exec_ctrl;
  u32 cpu_based_exec_ctrl;
  u32 cpu_based_2nd_exec_ctrl;
  u32 vmexit_ctrl;
  u32 vmentry_ctrl;
<<<<<<< HEAD
} vmcs_config_t;

typedef struct VMCS {
  u32 revision_id;
  u32 abort;
  char data[0];
} vmcs_t;

typedef struct VMC_CAPABILITY {
  u32 ept;
  u32 vpid;
  int has_load_efer : 1;
} vmx_capability_t;

__init int enable_vmx(void *u);
__init int init_vmx(void);
vmcs_t *__vmx_alloc_vmcs(int cpu);
__init int setup_vmcs_config(vmcs_config_t *vmcs_conf);
int adjust_vmx_controls(u32 ctl_min, u32 ctl_opt, u32 msr, u32 *result);
__init bool allow_1_setting(u32 msr, u32 ctl);
inline void __vmxon(u64 addr);
extern vmx_capability_t vmx_capability;
=======
};

struct vmcs {
  u32 revision_id;
  u32 abort;
  char data[0];
};

struct vmx_capability {
  u32 ept;
  u32 vpid;
  int has_load_efer : 1;
};

__init int enable_vmx(void *shit);
__init int init_vmx(void);
struct vmcs *__vmx_alloc_vmcs(int cpu);
__init int setup_vmcs_config(struct vmcs_config *vmcs_conf);
int adjust_vmx_controls(u32 ctl_min, u32 ctl_opt, u32 msr, u32 *result);
__init bool allow_1_setting(u32 msr, u32 ctl);
inline void __vmxon(u64 addr);
extern struct vmx_capability _vmx_capability;
>>>>>>> 4e902d123057a22228fd5d8c8c01b809d55658c9
inline bool cpu_has_vmx_vpid(void);
inline bool cpu_has_vmx_ept(void);