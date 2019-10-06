[@react.component]
let make = () => {
  <div className="min-h-screen flex items-center justify-center">
    <h1 className="text-5xl text-cyan font-sans">
      {React.string("Hello World")}
    </h1>
  </div>;
};