// import React from 'react';

// const FeedFormulation = () => {
//   return (
//     <div>
//       <h1>Feed Formulation</h1>
//       {/* Add your feed formulation content here */}
//     </div>
//   );
// };

// export default FeedFormulation;

// import React, { useState } from 'react';
// //import Advert from './components/Advert';
// //import LearnMore from './components/LearnMore';

// const FeedFormulation = () => {
//   const [formulationResult, setFormulationResult] = useState(null);

//   const handleGenerateFormulation = () => {
//     const foods = ["Corn", "Soybean", "Wheat","chimang", " nanaxi"," sunflower"," others "];
//     const description = "sakanizani bwininobwino ma zakudyazo .";
//     const result = `Foods: ${foods.join(', ')}\nDescription: ${description}`;
//     setFormulationResult(result);
//   };

//   return (
//     <div className="w-full p-4">
//       <h1 className="text-2xl mb-4">Feed Formulation</h1>
//       <label htmlFor="ingredient" className="block mb-2">Ingredient:</label>
//       <select id="ingredient" className="w-full p-2 mb-4 border rounded">
//         <option value="corn">Corn</option>
//         <option value="soybean">Soybean</option>
//         <option value="wheat">sun flower</option>
//         <option value="wheat">chimanga</option>
//         <option value="wheat">mpunga</option>
//         <option value="wheat">masamba</option>
//         <option value="wheat">madeya </option>
//         <option value="wheat">zakudya zina </option>
//       </select>

//       <label htmlFor="protein" className="block mb-2">Protein Requirement (g/kg):</label>
//       <input type="number" id="protein" name="protein" className="w-full p-2 mb-4 border rounded" min="0" step="10" />

//       <label htmlFor="energy" className="block mb-2">Energy Requirement (kcal/kg):</label>
//       <input type="number" id="energy" name="energy" className="w-full p-2 mb-4 border rounded" min="0" step="10" />

//       <label htmlFor="vitamins" className="block mb-2">Vitamins Requirement (%):</label>
//       <input type="number" id="vitamins" name="vitamins" className="w-full p-2 mb-4 border rounded" min="0" step="10" />

//       <label htmlFor="minerals" className="block mb-2">Minerals Requirement (%):</label>
//       <input type="number" id="minerals" name="minerals" className="w-full p-2 mb-4 border rounded" min="0" step="0.01" />

//       <button onClick={handleGenerateFormulation} className="w-full bg-gray-500 text-white py-2 rounded mb-4 hover:bg-green-600">Generate Formulation</button>

//       {formulationResult && (
//         <div className="bg-gray-100 p-4 rounded border mb-4">
//           <p>{formulationResult}</p>
//         </div>
//       )}

//       <label htmlFor="adjustment" className="block mb-2">Adjust Formulation:</label>
//       <textarea id="adjustment" name="adjustment" rows="4" className="w-full p-2 mb-4 border rounded"></textarea>

//       {/* Removed button functions */}
      
//        <textarea id="feedback" name="feedback" rows="4" className="w-full p-2 mb-4 border rounded" placeholder="Provide feedback"></textarea>
//       <button className="w-full bg-gray-500 text-white py-2 rounded hover:bg-gray-600">Submit Feedback</button>
      
      
//        {/* Create a div to contain the button and link */}
//        <div className="flex flex-col items-center mb-20 bg-gray-800 rounded-lg p-4">
//         <a href="https://gh-f.org/wp-content/uploads/2021/07/making-own-poultry-feeds-formulae-rations-ingredients.pdf" target="_blank" rel="noopener noreferrer" className="w-full text-white text-center">Learn More on How You Can Formulate Feed for Different Poultry Types</a>
//       </div>
//       {/* <LearnMore />
//       <Advert /> */}
//     </div>
//   );
// };

// export default FeedFormulation



import React, { useState } from 'react';

const Feed = () => {
  const [formulationResult, setFormulationResult] = useState(null);

  const handleGenerateFormulation = () => {
    const foods = ["Corn", "Soybean", "Wheat","chimang", " nanaxi"," sunflower"," others "];
    const description = "sakanizani bwininobwino ma zakudyazo .";
    const result = `Foods: ${foods.join(', ')}\nDescription: ${description}`;
    setFormulationResult(result);
  };

  return (
    <div className="w-full p-4">
      <h1 className="text-2xl mb-4">Feed Formulation</h1>
      <label htmlFor="ingredient" className="block mb-2">Ingredient:</label>
      <select id="ingredient" className="w-full p-2 mb-4 border rounded">
        <option value="corn">Corn</option>
        <option value="soybean">Soybean</option>
        <option value="wheat">sun flower</option>
        <option value="wheat">chimanga</option>
        <option value="wheat">mpunga</option>
        <option value="wheat">masamba</option>
        <option value="wheat">madeya </option>
        <option value="wheat">zakudya zina </option>
      </select>

      <label htmlFor="protein" className="block mb-2">Protein Requirement (g/kg):</label>
      <input type="number" id="protein" name="protein" className="w-full p-2 mb-4 border rounded" min="0" step="10" />

      <label htmlFor="energy" className="block mb-2">Energy Requirement (kcal/kg):</label>
      <input type="number" id="energy" name="energy" className="w-full p-2 mb-4 border rounded" min="0" step="10" />

      <label htmlFor="vitamins" className="block mb-2">Vitamins Requirement (%):</label>
      <input type="number" id="vitamins" name="vitamins" className="w-full p-2 mb-4 border rounded" min="0" step="10" />

      <label htmlFor="minerals" className="block mb-2">Minerals Requirement (%):</label>
      <input type="number" id="minerals" name="minerals" className="w-full p-2 mb-4 border rounded" min="0" step="0.01" />

      <button onClick={handleGenerateFormulation} className="w-full bg-gray-500 text-white py-2 rounded mb-4 hover:bg-green-600">Generate Formulation</button>

      {formulationResult && (
        <div className="bg-gray-100 p-4 rounded border mb-4">
          <p>{formulationResult}</p>
        </div>
      )}

      <label htmlFor="adjustment" className="block mb-2">Adjust Formulation:</label>
      <textarea id="adjustment" name="adjustment" rows="4" className="w-full p-2 mb-4 border rounded"></textarea>

      {/* Removed button functions */}
      
       <textarea id="feedback" name="feedback" rows="4" className="w-full p-2 mb-4 border rounded" placeholder="Provide feedback"></textarea>
      <button className="w-full bg-gray-500 text-white py-2 rounded hover:bg-gray-600">Submit Feedback</button>
      
      
       {/* Create a div to contain the button and link */}
       <div className="flex flex-col items-center mb-20 bg-gray-800 rounded-lg p-4">
        <a href="https://gh-f.org/wp-content/uploads/2021/07/making-own-poultry-feeds-formulae-rations-ingredients.pdf" target="_blank" rel="noopener noreferrer" className="w-full text-white text-center">Learn More on How You Can Formulate Feed for Different Poultry Types</a>
      </div>
      {/* <LearnMore />
      <Advert /> */}
    </div>
  );
};

export default Feed;
