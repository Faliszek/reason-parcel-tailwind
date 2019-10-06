[@react.component]
let make = () => {
  <div className="bg-black min-h-screen flex items-center justify-center">
    <h1 className="text-4xl text-reason-red font-sans">
      {React.string("Hello World")}
    </h1>
  </div>;
};