# Fundamentals of System Hardware

**Learning Objectives**
- Define a Computer
- Understand Computer Components
- How does the CPU work?
- What is the memory hierarchy?
- What are hard disks?
- What is networking?

## What is a Computer?

A very basic definition of a computer is an electromechanical device which takes input, does processing and produces output.

Input --> Computer (processing takes place) --> Output

**Some Types of Computers**
- Mainframe
- Server
- Desktop
- Laptop
- Tablet
- Smartphone

## Inside a Computer

All Computers have a Central Processing Unit (CPU), main memory (RAM) for temporary data storage, and secondary memory for permanent data storage.

Most computers will have a Graphics Processing Unit (GPU) or video graphics controller to render the screen, a network interface for communications, and peripheral interfaces like USB, Thunderbolt, etc.

Internal communications in a machine are done via a "bus." A bus is a physical pathway for communication between two or more devices.

The system bus is the main pathway between the CPU and RAM, but also carries data to and from Input and Output (IO) devices.

**Overview of Computer Components**

Power Supply
- Provides clean conversion from line voltage to 12V and 5V needed inside the computer.

Motherboard
- Provides physical connectivity for all the devices, includes the system bus and all peripheral busses. If the CPU is the brain, this is the circulatory system!

The CPU
- The "brain" of the computer. This is where all the calculations are done.

RAM / Main Memory
- This is where code and date are stored. When the computer is shutdown, this is lost. (volatile memory)

Secondary Storage
- Made up of Hard Drive Disks (HDD) or Solid State Disks (SSD). This is the only permanent storage system in the computer.

Tertiary Storage
- The OFFLINE storage system. (USB Drives, CDs, etc.)

Video Controller Card / GPU
- Stores information to display on the screen. It can do complex calculations related to decimal numbers.

## The CPU

This is where all the processing and commands are done inside the computer. This is the only location where code is actually executed in the system. The CPU only runs machine language code and operates in a "fetch-execute" cycle. Each CPU has a small amount of memory, called "registers" which it uses to perform operations and store results.

**Machine Language**

Computers can only understand very basic commands like move, add, subtract, multiply, compare, etc. The designer of the CPU puts the capability to perform these operations in the chip. We don't have the ability to add to these simple operations, but higher level languages (python, c++, etc) can convert to machine lanugage operations and allow us to write more complex operations that boil down to simple instructions for the computer.

**Instruction Set**

The designers of the CPU create a set of instructions that the CPU can perform. This set of instructions, usually as small as 100, can each be represented by a numeric value. When the CPU receives a particular instruction, it performs that task.

**Fetch-Execute Cycle**

The fetch-execute cycle is how the CPU runs commands. First, it fetches or moves one instruction from RAM into the instruction register in the CPU. Then, it decodes that instruction and, if necessary, moves in additional parameters from RAM. Once everything is compiled in the CPU, the CPU executes the instruction. This process repeats with the next instruction in the sequence and can take as little as 10 nanoseconds.

![fetch-execute cycle diagram](.../images/fetch-execute.png)

**NOTE: Machine Language Explained**

Machine language is the language understood by a computer. It is the only thing a computer can work with. However, it is very difficult and tedious for us to write machine language because it consists completely of binary code (1s and 0s). So instead we use high level languages or what we know as programming languages like Python, C++, Java, etc. High level languages are converted into machine language using compilers which are computer programs built to process this language conversion. The language hierarchy from top to bottom consists of high level languages, assembly language, and machine language.

## Memory 

In order for code to be executed, it has to be in fetched into registers built into the CPU. So, why don't we just store everything in registers? Although registers seem ideal because they are quick to access, they are typically very small because they are expensive to produce.

To address this, computers are built using a memory hierarchy. At the top of the hierarchy, things are incredibly fast, but tend to be much smaller and much more expensive like registers. At the bottom of the hierarchy, things are larger and cheaper, but much slower.

![memory hierarchy breakdown](.../images/memory.png)

### RAM

Known as RANDOM Access Memory (RAM) because any data held in RAM can be accessed in the same amount of time (which is not necessarily true for older secondary storage).

This area of memory is broken down into bytes, and each byte  is accessible independently of the others. RAM is considered volatile memory because when the computer is turned off, everything in RAM is lost. It it temporary storage.

When running a program, all machine language instructions are brought into RAM and, one by one, pulled into the CPU by the fetch and execute cycle.

### Secondary Storage

There are two types of secondary storage.

**Hard Disk Drives (HDD)** also known as "spinning" drives contain multiple magnetic material discs which rotate together at a constant velocity and read heads which move to different radii on the disk. This allows the system to access any position via the three dimensional polar coordinates. Accessing first the innermost radius then the outermost radius takes significantly longer than two adjacent radii. So, accessing data stored in a HDD is slower. However, the benefit is that HDDs are available in much larger sizes.

**Solid State Disks (SSD)** is where the industry is moving. SSDs contain a number of chips like USB flash drives. Data is stored electrically, in these chips and all data can be accessed in the same amount of time. There is no time difference like in HDDs. Although they perform much faster than HDDs, they tend to be much more expensive and much smaller.

## Networking

Data can come from anywhere as long as the data and our system are connected to the same network. Networks are connected via the internet.

There are many ways computers can be physically connected. The most popular connections are copper, fiber, and wireless. Copper is the standard Ethernet cable or any sort of physical cable that involves a metallic connection. The most common cables use copper hence the name. Fiber or fiber optic transmits information via light on a piece of glass. Fiber is a cable but it can trasmit information with a lot less attenuation so we lose less information in the data transfer and it can go farther distances. Fiber cables go faster and travel longer distances, but unfortunately cost a lot more. Finally, the most common type of wireless connection is wifi, but there are many other types of wireless connection.

A **network protocol** is an established set of rules that determine how data is transmitted between different devices in the same network. Essentially, it allows connected devices to communicate with each other regardless of any differences in their internal processes, structure or design. It's the language computers use to talk to each other. Protocols are thus very important to networking!

There are many different protocols in use. Some examples include the 802.11 group, ATM (asynchronous transfer mode), and ethernet (which defines both a protocol and physical connection). 

**Packets**

To connect across netwroks, we send very small amounts of data (usually around 1000-1500 bytes) from one program running on a machine to another program. This data cannot be sent directly, it has to be sent via protocols which each pass a small amount of information to a packet. We encapsulate this packet and pass it down through different levels that each add a different layer of information. This ensures that when data is received at its destination that computer knows how to handle it. Thus, data is sent from a program to another program indirectly by using multiple protocols. Generally, there will be protocols included for each application, each logical network, and each physical network.

There are many layers that we use often. Application level protocols include HTTP (for websites), SMTP (to pass mail), and IMAP (to access mail). Logical protocols or, more formally, network protocols simulate the concept of connection. There are two types of network level protocols, connection oriented and connection less. These deal with the ordering and guarantee of delivery of packets and global delivery of packets. Physical protocols are mostly concerned with local addressing and how to deal with the eccentricities of the physical medium.