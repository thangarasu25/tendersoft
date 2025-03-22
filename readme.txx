Project setup

node version should be = 18

install the packages using this command
npm install

run the application using this comment
ng s

if you get 
this error 
error:0308010C:digital envelope routines::unsupported

do this it will fix


Tell Node to use the legacy OpenSSL provider

On Unix-like (Linux, macOS, Git bash, etc.):

export NODE_OPTIONS=--openssl-legacy-provider
On Windows command prompt:

set NODE_OPTIONS=--openssl-legacy-provider
On PowerShell:

$env:NODE_OPTIONS = "--openssl-legacy-provider"