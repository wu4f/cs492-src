FROM ubuntu:20.04
# Originally from Michael Macnair
LABEL maintainer="cs492"
# Users
##############
RUN useradd --create-home --shell /bin/bash fuzzer
# AFL + Deps
##############
USER root
RUN apt update && apt upgrade -y
RUN DEBIAN_FRONTEND=noninteractive apt install -y clang llvm-dev git build-essential curl vim nano libssl-dev screen cgroup-tools sudo gcc-multilib gcc gdb tmux afl++
#RUN update-alternatives --install /usr/bin/clang clang `which clang-3.8` 1
#RUN update-alternatives --install /usr/bin/clang++ clang++ `which clang++-3.8` 1
#RUN update-alternatives --install /usr/bin/llvm-config llvm-config `which llvm-config-3.8` 1
#RUN update-alternatives --install /usr/bin/llvm-symbolizer llvm-symbolizer `which llvm-symbolizer-3.8` 1
# For sudo for ASAN:
RUN usermod -aG sudo fuzzer
USER fuzzer
WORKDIR /home/fuzzer
#RUN curl https://lcamtuf.coredump.cx/afl/releases/afl-latest.tgz | tar xz
# Exercises
##############
USER fuzzer
WORKDIR /home/fuzzer
COPY . cs492-afl
# See the README - this password is visible to anyone with access to the image
USER root
RUN echo "fuzzer:`cat cs492-afl/password.txt`" | chpasswd && rm cs492-afl/password.txt
RUN chown -R fuzzer:fuzzer cs492-afl
USER fuzzer
# If we wanted to execute a command on the container...
#############
# ENTRYPOINT ["/bin/bash"]
# sshd mode setup
#############
# RUN apt-get update && apt-get install -y openssh-server
# RUN mkdir /var/run/sshd
#   SSH login fix. Otherwise user is kicked off after login
# RUN sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd
# ENV NOTVISIBLE "in users profile"
# RUN echo "export VISIBLE=now" >> /etc/profile
#   Root's password is root, but we don't need to enable remote login as root
# RUN echo 'root:root' | chpasswd
# RUN sed -i 's/PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config
#   Run sshd and expose its port for users to connect to
# USER root
# EXPOSE 22
# CMD ["/usr/sbin/sshd", "-D"]
