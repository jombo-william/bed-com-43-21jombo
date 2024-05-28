

import React from 'react';
import { Link } from 'react-router-dom';

const Service = () => {
  return (
    <div className="p-6">
      <h1 className="text-2xl font-bold mb-4">Services</h1>
      <ul className="space-y-2">
        <li>
          <Link to="/service/guide-to-raising-chicken" className="block p-4 bg-gray-200 hover:bg-gray-300 text-gray-800 hover:text-black font-semibold rounded">
            Guide to Raising Chicken
          </Link>
        </li>
        <li>
          <Link to="/service/poultry-health-management" className="block p-4 bg-gray-200 hover:bg-gray-300 text-gray-800 hover:text-black font-semibold rounded">
            Poultry Health Management
          </Link>
        </li>
        <li>
          <Link to="/feed-formulation" className="block p-4 bg-gray-200 hover:bg-gray-300 text-gray-800 hover:text-black font-semibold rounded">
            Feed Formulation
          </Link>
        </li>
        <li>
          <Link to="/service/biosecurity-measures" className="block p-4 bg-gray-200 hover:bg-gray-300 text-gray-800 hover:text-black font-semibold rounded">
            Biosecurity Measures for Poultry Farms
          </Link>
        </li>
        <li>
          <Link to="/service/nutritional-guide" className="block p-4 bg-gray-200 hover:bg-gray-300 text-gray-800 hover:text-black font-semibold rounded">
            Nutritional Guide for Poultry
          </Link>
        </li>
        <li>
          <Link to="/service/checker" className="block p-4 bg-gray-200 hover:bg-gray-300 text-gray-800 hover:text-black font-semibold rounded">
            Disease Checker
          </Link>
        </li>
        <li>
          <Link to="/service/symptoms-map" className="block p-4 bg-gray-200 hover:bg-gray-300 text-gray-800 hover:text-black font-semibold rounded">
            Symptoms Map
          </Link>
        </li>
      </ul>
    </div>
  );
};

export default Service;
