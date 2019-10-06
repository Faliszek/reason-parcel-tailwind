[@react.component]
let make = () => {
  <div className="min-h-screen flex items-center justify-center">
    <h1 className="text-5xl text-black font-sans">
      {React.string("Greetings.")}
    </h1>
  </div>;
};