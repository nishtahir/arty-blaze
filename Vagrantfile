# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|

  config.vm.box = "ubuntu/trusty64"

  config.vm.provider "virtualbox" do |vb|
    vb.cpus = 2
    vb.memory = "4096"
  end

  config.vm.provision "shell", inline: <<-SHELL
    add-apt-repository ppa:likemartinma/crosstool-ng -y
    apt-get update
    apt-get install -y build-essential libncurses5-dev automake libtool bison flex texinfo crosstool-ng
  SHELL
end
