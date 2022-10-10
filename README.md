# MOSK - Master OS Kernal
Master OS Kernal (MOSK) is kernal used tagetted on x86_64 and x64 based systems. MOSK facilitates kernal activities for differet varients of Master Operating system (MOS).
<br>
Auther: Midhun Chandrasekhar
<br>
Date: Oct 10, 2022
<br>
Place: Kerala, In

<br><br>

### Build
![GitHub Workflow Status](https://img.shields.io/github/workflow/status/dwyl/auth_plug/Elixir%20CI?label=build&style=flat-square)
![](https://img.shields.io/badge/Maintained%3F-yes-green.svg)
<br>

### Technologies
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Docker](https://img.shields.io/badge/docker-%230db7ed.svg?style=for-the-badge&logo=docker&logoColor=white)


### Usage
```javascript
Download ISO  dist/kernal.iso

To Install in virtual machine softwares, Use
  - Virtual Box
  - VMWare
  - Qemu

To install in hardware, 
  - Use rfus or windisk to make bootable disk
  - Boot disk to the computer
```

### To build
```javascript
Setup docker

Create builder: 
  - docker build builder -t mosk-env

Build ISO:
  - docker run --rm -it -v "$(pwd)":/root/env mosk-env
  - make build-x86_64
  - exit

Run the build:
  - qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso
```

<br>

### Contributing 
[![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](https://github.com/Midhun-Chandrasekhar/OpenLP)


