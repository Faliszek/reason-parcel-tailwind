# Reason Tailwind CSS Parcel Starter Project

This is an example of a super simple Parcel setup for using [Tailwind CSS](https://tailwindcss.com).

To get started, clone the project and install the dependencies:

```
# Using npm
npm install

# Using Yarn
yarn
```

Scripts

```
yarn buckle:up
yarn start
yarn fresh:start
```

For some reason parcel don't update after tailwind.config.js is changed, so whenever you change the file,
try `yarn fresh:start` it will remove dist and cache folder (on unix systems) and start parcel again.
