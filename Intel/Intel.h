#ifndef _INTEL_H
#define _INTEL_H
void decode_Intel_caches (struct cpudata *cpu, int output);
void show_Intel_caches(struct cpudata *cpu);
void decode_Intel_bluesmoke(int cpunum, int family);
void dump_p4_MSRs(struct cpudata *cpu);
void dump_p6_MSRs(struct cpudata *cpu);
void dump_centrino_MSRs(struct cpudata *cpu);
void decode_microcode(struct cpudata *cpu);

#define MSR_IA32_PLATFORM_ID	0x17
#define MSR_IA32_UCODE_REV		0x8b

#define MSR_IA32_PERF_STATUS		0x198
#define MSR_IA32_PERF_CTL		0x199
#define MSR_IA32_THERM_STATUS		0x19c
#define MSR_PM_THERM2_CTL		0x19d
#define MSR_IA32_MISC_ENABLE		0x1a0

#endif /* _INTEL_H */
