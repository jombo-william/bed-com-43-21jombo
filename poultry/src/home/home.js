


import React from 'react';

const Home = () => {
  return (
    <div className="flex flex-col items-center p-4">
      {/* Website Name */}
      <h1 className="text-3xl font-bold mb-4">PoultryConnect Malawi</h1>
      
      {/* Description */}
      <p className="text-gray-700 mb-8">
        In Malawi, poultry farmers face significant challenges due to a lack of accessible information and reliable platforms for product advertisement. PoultryConnect aims to change that by providing a comprehensive solution to support farmers and buyers alike.
      </p>
      
      {/* Key Features */}
      <h2 className="text-2xl font-semibold mb-4">Our Mission</h2>
      <p className="text-gray-700 mb-8">
        Our goal is to empower poultry farmers in Malawi by offering easy access to essential information and a reliable marketplace for their products.
      </p>

      <h2 className="text-2xl font-semibold mb-4">Key Features</h2>
      <ul className="list-disc list-inside text-gray-700 mb-8">
        <li>Information Access: Gain knowledge on best practices and connect with experienced farmers.</li>
        <li>Marketplace: Advertise and manage poultry products efficiently.</li>
        <li>Direct Purchases: Buyers can purchase high-quality poultry products directly from farmers.</li>
        <li>Community Support: Interact with other farmers and industry experts.</li>
      </ul>

      <h2 className="text-2xl font-semibold mb-4">Who Can Benefit?</h2>
      <ul className="list-disc list-inside text-gray-700 mb-8">
        <li>Aspiring Farmers: Learn and interact with experienced farmers.</li>
        <li>Established Farmers: Showcase and manage your products.</li>
        <li>Buyers: Purchase fresh, high-quality poultry products directly from the source.</li>
        <li>Administrators: Oversee platform functionality and user engagement.</li>
      </ul>

     

      {/* Image Section */}
      <div className="mb-8 w-full">
        <img src={require('./kk.jpg')} alt="Banner" className="w-full h-auto object-cover" />
      </div>

      {/* Call to Action */}
      <div className="mb-8">
        <a href="https://www.poultryhub.org/" className="bg-blue-500 text-white py-2 px-4 rounded mr-4" target="_blank" rel="noopener noreferrer">Learn More</a>
        <a href="#" className="bg-green-500 text-white py-2 px-4 rounded">Sign Up</a>
      </div>
    </div>
  );
};

export default Home;





