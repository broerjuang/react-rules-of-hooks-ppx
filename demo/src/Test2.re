/* This shoudn't complain about 'handler' */
let useDebounce = (value, delay) => {
  let (debouncedValue, setDebouncedValue) = React.useState(_ => value);

  React.useEffect1(
    () => {
      let handler =
        Js.Global.setTimeout(() => setDebouncedValue(_ => value), delay);

      Js.log(handler);

      None;
    },
    [|value|],
  );

  debouncedValue;
};

open React;

[@react.component]
let make = (~randomProp: string) => {
  <div
    /* useEffect1(
         () => {
           Js.log(show);
           setShow(_ => randomProp);
           None;
         },
         [|show|],
       ); */
  />;
};
