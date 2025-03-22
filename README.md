
## Development server

Run `ng serve` for a dev server. Navigate to `http://localhost:4200/`. The app will automatically reload if you change any of the source files.

## Code scaffolding

Run `ng generate component component-name` to generate a new component. You can also use `ng generate directive|pipe|service|class|guard|interface|enum|module`.

## Build

Run `ng build` to build the project. The build artifacts will be stored in the `dist/` directory.

## Running unit tests

Run `ng test` to execute the unit tests via
## Running end-to-end tests

Run `ng e2e` to execute the end-to-end tests via a platform of your choice. To use this command, you need to first add a package that implements end-to-end testing capabilities.

## Further help

To get more help on the Angular CLI use `ng help` or go check out the page.
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
